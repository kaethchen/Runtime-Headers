@class NSString;

@interface _NSSwiftURLQueryItem : _NSURLQueryItemBridge {
    void /* unknown type, empty encoding */ queryItem;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *value;

- (id)copyWithZone:(void *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithName:(id)a0 value:(id)a1;

@end
