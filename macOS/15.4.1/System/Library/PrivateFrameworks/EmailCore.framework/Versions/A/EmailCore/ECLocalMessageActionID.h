@class NSString;

@interface ECLocalMessageActionID : NSObject <NSCopying> {
    void /* unknown type, empty encoding */ stringValue;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ databaseID;
@property (nonatomic, readonly) NSString *stringValue;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) long long hash;

- (id)copyWithZone:(void *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDatabaseID:(long long)a0;

@end
