@interface IPAChecksum : NSObject <NSCopying> {
    struct IPAChecksumBytes { unsigned char data[16]; } _bytes;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)string;
- (id)initWithString:(id)a0;
- (id)initWithData:(id)a0;
- (id)initWithBytes:(struct IPAChecksumBytes { unsigned char x0[16]; })a0;
- (BOOL)isEqualToBytes:(struct IPAChecksumBytes { unsigned char x0[16]; })a0;
- (struct IPAChecksumBytes { unsigned char x0[16]; })checksumBytes;
- (id)initWithChecksumAsData:(id)a0;

@end
