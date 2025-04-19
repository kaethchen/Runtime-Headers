@interface PLTaggedPointer : NSObject {
    union { unsigned long long unsignedPayload; long long signedPayload; } _payload;
}

+ (unsigned short)tag;
+ (id)newInstanceWithPayload:(unsigned long long)a0;
+ (id)newInstanceWithSignedPayload:(long long)a0;
+ (BOOL)taggedPointersEnabled;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithPayload:(unsigned long long)a0;
- (unsigned long long)payload;
- (BOOL)isTaggedPointer;
- (id)initWithSignedPayload:(long long)a0;
- (long long)signedPayload;

@end
