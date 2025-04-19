@class CCPBMutableData;

@interface CCPBDataWriter : NSObject {
    CCPBMutableData *_data;
}

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)write:(const char *)a0 maxLength:(unsigned long long)a1;
- (BOOL)writeData:(id)a0;
- (id)immutableData;
- (id)initWithInitialCapacity:(unsigned long long)a0;
- (void)writeBOOL:(BOOL)a0 forTag:(unsigned int)a1;
- (void)writeData:(id)a0 forTag:(unsigned int)a1;
- (void)writeDouble:(double)a0 forTag:(unsigned int)a1;
- (void)writeFixed32:(unsigned int)a0 forTag:(unsigned int)a1;
- (void)writeFixed64:(unsigned long long)a0 forTag:(unsigned int)a1;
- (void)writeFloat:(float)a0 forTag:(unsigned int)a1;
- (void)writeInt32:(int)a0 forTag:(unsigned int)a1;
- (void)writeInt64:(long long)a0 forTag:(unsigned int)a1;
- (void)writeSfixed32:(int)a0 forTag:(unsigned int)a1;
- (void)writeSfixed64:(long long)a0 forTag:(unsigned int)a1;
- (void)writeSint32:(int)a0 forTag:(unsigned int)a1;
- (void)writeSint64:(long long)a0 forTag:(unsigned int)a1;
- (void)writeString:(id)a0 forTag:(unsigned int)a1;
- (void)writeUint32:(unsigned int)a0 forTag:(unsigned int)a1;
- (void)writeUint64:(unsigned long long)a0 forTag:(unsigned int)a1;

@end
