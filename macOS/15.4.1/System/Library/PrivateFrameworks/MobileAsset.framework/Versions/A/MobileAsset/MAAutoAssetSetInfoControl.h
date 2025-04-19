@class NSArray;

@interface MAAutoAssetSetInfoControl : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL clearingAfter;
@property (readonly, retain, nonatomic) NSArray *limitedToClientDomains;
@property (readonly, retain, nonatomic) NSArray *limitedToSetIdentifiers;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)summary;
- (id)_arrayStringsToString:(id)a0;
- (id)initClearingAfter:(BOOL)a0;
- (id)initClearingAfter:(BOOL)a0 limitedToClientDomains:(id)a1;
- (id)initClearingAfter:(BOOL)a0 limitedToClientDomains:(id)a1 limitedToSetIdentifiers:(id)a2;
- (id)initClearingAfter:(BOOL)a0 limitedToSetIdentifiers:(id)a1;

@end
