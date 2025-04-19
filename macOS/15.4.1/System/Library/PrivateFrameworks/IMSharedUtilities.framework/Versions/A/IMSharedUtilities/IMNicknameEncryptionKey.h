@class NSData;

@interface IMNicknameEncryptionKey : NSObject

@property (retain, nonatomic) NSData *data;
@property (readonly) const void *bytes;
@property (readonly, nonatomic) unsigned long long length;

- (void).cxx_destruct;
- (id)initWithData:(id)a0;

@end
