@class NSData;

@interface HMIDataReader : NSObject {
    NSData *_data;
    unsigned long long _position;
}

- (unsigned long long)length;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (unsigned long long)position;
- (id)readData:(unsigned long long)a0;
- (unsigned int)readUInt32;
- (unsigned long long)readUInt64;
- (void)seek:(unsigned long long)a0;

@end
