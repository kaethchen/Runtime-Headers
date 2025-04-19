@class HDContentProtectionManager, _HKBehavior;

@interface HDDatabaseConfiguration : NSObject <NSCopying>

@property (retain, nonatomic) HDContentProtectionManager *contentProtectionManager;
@property (readonly, nonatomic) _HKBehavior *behavior;
@property (readonly, nonatomic) unsigned long long concurrentReaderLimit;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithBehavior:(id)a0 concurrentReaderLimit:(unsigned long long)a1 contentProtectionManager:(id)a2;

@end
