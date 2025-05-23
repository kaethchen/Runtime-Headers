@class NSData;

@interface MSHistoryTransitItem : MSHistoryItem {
    void /* unknown type, empty encoding */ _muid;
    void /* unknown type, empty encoding */ _transitLineStorage;
}

@property (class, nonatomic, readonly) Class managedClass;

@property (nonatomic) unsigned long long muid;
@property (nonatomic, copy) NSData *transitLineStorage;

- (void).cxx_destruct;
- (id)initWithMuid:(unsigned long long)a0 transitLineStorage:(id)a1;
- (id)initWithObject:(id)a0 store:(id)a1 lazyLoad:(BOOL)a2;
- (id)initWithStore:(id)a0 muid:(unsigned long long)a1 transitLineStorage:(id)a2;
- (void)setPropertiesUnsafeWithManagedObject:(id)a0 lazyLoad:(BOOL)a1;

@end
