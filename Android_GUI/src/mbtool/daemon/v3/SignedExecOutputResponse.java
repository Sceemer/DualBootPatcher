// automatically generated by the FlatBuffers compiler, do not modify

package mbtool.daemon.v3;

import java.nio.*;
import java.lang.*;
import java.util.*;
import com.google.flatbuffers.*;

@SuppressWarnings("unused")
public final class SignedExecOutputResponse extends Table {
  public static SignedExecOutputResponse getRootAsSignedExecOutputResponse(ByteBuffer _bb) { return getRootAsSignedExecOutputResponse(_bb, new SignedExecOutputResponse()); }
  public static SignedExecOutputResponse getRootAsSignedExecOutputResponse(ByteBuffer _bb, SignedExecOutputResponse obj) { _bb.order(ByteOrder.LITTLE_ENDIAN); return (obj.__init(_bb.getInt(_bb.position()) + _bb.position(), _bb)); }
  public SignedExecOutputResponse __init(int _i, ByteBuffer _bb) { bb_pos = _i; bb = _bb; return this; }

  public String line() { int o = __offset(4); return o != 0 ? __string(o + bb_pos) : null; }
  public ByteBuffer lineAsByteBuffer() { return __vector_as_bytebuffer(4, 1); }

  public static int createSignedExecOutputResponse(FlatBufferBuilder builder,
      int lineOffset) {
    builder.startObject(1);
    SignedExecOutputResponse.addLine(builder, lineOffset);
    return SignedExecOutputResponse.endSignedExecOutputResponse(builder);
  }

  public static void startSignedExecOutputResponse(FlatBufferBuilder builder) { builder.startObject(1); }
  public static void addLine(FlatBufferBuilder builder, int lineOffset) { builder.addOffset(0, lineOffset, 0); }
  public static int endSignedExecOutputResponse(FlatBufferBuilder builder) {
    int o = builder.endObject();
    return o;
  }
}

