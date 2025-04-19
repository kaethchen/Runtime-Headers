@class NSString;

@interface RBSWrappedLSInfo : NSObject

@property (readonly, copy, nonatomic) NSString *bundleID;
@property (readonly, copy, nonatomic) NSString *personaString;
@property (readonly, copy, nonatomic) NSString *persistentJobLabel;
@property (readonly, nonatomic) int platform;
@property (readonly, nonatomic) unsigned long long bundleInode;
@property (readonly, nonatomic) unsigned long long execInode;

+ (id)infoWithBundleID:(id)a0 personaString:(id)a1 persistentJobLabel:(id)a2 platform:(int)a3 bundleInode:(unsigned long long)a4 execInode:(unsigned long long)a5;

- (void).cxx_destruct;
- (id)_initWithBundleID:(id)a0 personaString:(id)a1 persistentJobLabel:(id)a2 platform:(int)a3 bundleInode:(unsigned long long)a4 execInode:(unsigned long long)a5;

@end
