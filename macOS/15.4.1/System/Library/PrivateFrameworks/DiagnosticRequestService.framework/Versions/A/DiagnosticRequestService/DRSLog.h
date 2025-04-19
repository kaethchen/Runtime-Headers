@class NSString;

@interface DRSLog : NSObject

@property (readonly, nonatomic) NSString *path;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned long long size;
@property (readonly, nonatomic) BOOL transferOwnership;
@property (readonly, nonatomic) BOOL isAvailableOnDisk;

+ (id)entityName;
+ (Class)_moClass;

- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)fileDescription;
- (void)_configureLogMO:(id)a0;
- (BOOL)_deleteOnDiskLog;
- (BOOL)_getSizeFromPath;
- (id)_initWithLogMO_ON_MOC_QUEUE:(id)a0;
- (id)_initWithLogPath:(id)a0 transferOwnership:(BOOL)a1;
- (id)_initWithLogPath:(id)a0 transferOwnership:(BOOL)a1 size:(unsigned long long)a2;

@end
