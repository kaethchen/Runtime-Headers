@class NSDictionary;

@interface PSIQueryPlaceToken : PSIQueryToken {
    NSDictionary *_locationNameByCategory;
}

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithText:(id)a0 locationNameByCategory:(id)a1;
- (id)parentToken;

@end
