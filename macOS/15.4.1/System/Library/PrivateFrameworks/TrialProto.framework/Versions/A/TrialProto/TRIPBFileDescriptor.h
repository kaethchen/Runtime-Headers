@class NSString;

@interface TRIPBFileDescriptor : NSObject

@property (readonly, copy, nonatomic) NSString *package;
@property (readonly, copy, nonatomic) NSString *objcPrefix;
@property (readonly, nonatomic) unsigned char syntax;

- (void)dealloc;
- (id)initWithPackage:(id)a0 objcPrefix:(id)a1 syntax:(unsigned char)a2;
- (id)initWithPackage:(id)a0 syntax:(unsigned char)a1;

@end
