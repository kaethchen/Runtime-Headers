@class NSString;

@interface CKDeviceCapability : NSObject <NSSecureCoding, NSCoding> {
    void /* unknown type, empty encoding */ _wrapped;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *value;
@property (nonatomic, readonly) int level;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *description;

+ (id)fromSqliteRepresentation:(id)a0;
+ (id)fromSqliteRepresentations:(id)a0;
+ (BOOL)isCapabilitySet:(id)a0 equalTo:(id)a1;
+ (BOOL)isCapabilitySet:(id)a0 subsetOf:(id)a1;
+ (id)pruneAndSort:(id)a0;
+ (id)sqliteRepresentations:(id)a0;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithLevel:(int)a0 name:(id)a1 value:(id)a2;
- (id)sqliteRepresentation;

@end
