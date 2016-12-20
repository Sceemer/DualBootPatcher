// automatically generated by the FlatBuffers compiler, do not modify

package mbtool.daemon.v3;

import java.nio.*;
import java.lang.*;
import java.util.*;
import com.google.flatbuffers.*;

@SuppressWarnings("unused")
public final class PathCopyError extends Table {
  public static PathCopyError getRootAsPathCopyError(ByteBuffer _bb) { return getRootAsPathCopyError(_bb, new PathCopyError()); }
  public static PathCopyError getRootAsPathCopyError(ByteBuffer _bb, PathCopyError obj) { _bb.order(ByteOrder.LITTLE_ENDIAN); return (obj.__init(_bb.getInt(_bb.position()) + _bb.position(), _bb)); }
  public PathCopyError __init(int _i, ByteBuffer _bb) { bb_pos = _i; bb = _bb; return this; }

  public int errnoValue() { int o = __offset(4); return o != 0 ? bb.getInt(o + bb_pos) : 0; }
  public String msg() { int o = __offset(6); return o != 0 ? __string(o + bb_pos) : null; }
  public ByteBuffer msgAsByteBuffer() { return __vector_as_bytebuffer(6, 1); }

  public static int createPathCopyError(FlatBufferBuilder builder,
      int errno_value,
      int msgOffset) {
    builder.startObject(2);
    PathCopyError.addMsg(builder, msgOffset);
    PathCopyError.addErrnoValue(builder, errno_value);
    return PathCopyError.endPathCopyError(builder);
  }

  public static void startPathCopyError(FlatBufferBuilder builder) { builder.startObject(2); }
  public static void addErrnoValue(FlatBufferBuilder builder, int errnoValue) { builder.addInt(0, errnoValue, 0); }
  public static void addMsg(FlatBufferBuilder builder, int msgOffset) { builder.addOffset(1, msgOffset, 0); }
  public static int endPathCopyError(FlatBufferBuilder builder) {
    int o = builder.endObject();
    return o;
  }
}

