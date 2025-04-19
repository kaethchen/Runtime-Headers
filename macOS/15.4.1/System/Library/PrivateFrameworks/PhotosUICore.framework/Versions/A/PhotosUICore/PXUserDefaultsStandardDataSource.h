@class NSDate, NSObject;
@protocol OS_dispatch_queue;

@interface PXUserDefaultsStandardDataSource : NSObject <PXUserDefaultsDataSource> {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (class, readonly, nonatomic) PXUserDefaultsStandardDataSource *sharedInstance;

@property (readonly, nonatomic) NSDate *currentDate;

- (id)init;
- (void).cxx_destruct;
- (id)_initAsSharedInstance;
- (id)persistedValueForKey:(id)a0;
- (void)setPersistedValue:(id)a0 forKey:(id)a1;

@end
