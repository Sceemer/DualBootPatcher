// automatically generated by the FlatBuffers compiler, do not modify

package mbtool.daemon.v3;

import java.nio.*;
import java.lang.*;
import java.util.*;
import com.google.flatbuffers.*;

@SuppressWarnings("unused")
public final class Unsupported extends Table {
  public static Unsupported getRootAsUnsupported(ByteBuffer _bb) { return getRootAsUnsupported(_bb, new Unsupported()); }
  public static Unsupported getRootAsUnsupported(ByteBuffer _bb, Unsupported obj) { _bb.order(ByteOrder.LITTLE_ENDIAN); return (obj.__init(_bb.getInt(_bb.position()) + _bb.position(), _bb)); }
  public Unsupported __init(int _i, ByteBuffer _bb) { bb_pos = _i; bb = _bb; return this; }


  public static void startUnsupported(FlatBufferBuilder builder) { builder.startObject(0); }
  public static int endUnsupported(FlatBufferBuilder builder) {
    int o = builder.endObject();
    return o;
  }
}

