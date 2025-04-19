@class NSString;

@interface MapsSync.MapsSyncIncidentReport : MapsSync.MapsSyncBaseItem {
    void /* unknown type, empty encoding */ _countryCode;
    void /* unknown type, empty encoding */ _type;
}

@property (nonatomic, readonly) NSString *countryCode;
@property (nonatomic, readonly) short type;

- (BOOL)isEqual:(id)a0;
- (id)initWithObject:(id)a0;
- (void).cxx_destruct;
- (Class)managedObjectClass;
- (void)addEditWithBlock:(id /* block */)a0;
- (Class)mutableObjectClass;
- (void)setPropertiesWithObject:(id)a0;

@end
