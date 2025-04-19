@class ASDTIOA2LegacyDevice;

@interface ASDTIOA2LegacyHeadsetInfoProperty : ASDCustomProperty {
    ASDTIOA2LegacyDevice *_device;
}

- (void).cxx_destruct;
- (id)value;
- (BOOL)getPropertyWithQualifierSize:(unsigned int)a0 qualifierData:(const void *)a1 dataSize:(unsigned int *)a2 andData:(void *)a3 forClient:(int)a4;
- (BOOL)setPropertyWithQualifierSize:(unsigned int)a0 qualifierData:(const void *)a1 dataSize:(unsigned int)a2 andData:(const void *)a3 forClient:(int)a4;
- (id)initWithIOA2Device:(id)a0;

@end
