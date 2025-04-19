@interface AOTImage : NSObject

@property (nonatomic) struct aotkey { unsigned char key[32]; } key;
@property (nonatomic) unsigned long long x86LoadAddress;
@property (nonatomic) unsigned long long aotLoadAddress;
@property (nonatomic) unsigned long long aotSize;

@end
