@class NSString;

@interface SIComponentIdentifier : NSObject {
    void /* unknown type, empty encoding */ componentName;
    void /* unknown type, empty encoding */ _uuid;
    void /* unknown type, empty encoding */ $__lazy_storage_$_uuid;
}

@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *debugDescription;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithName:(int)a0 uuid:(id)a1;
- (id)initWithName:(int)a0 schemaUUID:(id)a1;

@end
