@class NSString;

@interface PS190FirmwareBlock : NSObject {
    unsigned char _buffer[4096];
}

@property (readonly) unsigned int number;
@property (readonly) unsigned char crc8;
@property (readonly) const char *bytes;
@property (readonly) NSString *dumpString;

- (id)description;
- (id)initWithNumber:(unsigned char)a0 bytes:(const char *)a1;

@end
