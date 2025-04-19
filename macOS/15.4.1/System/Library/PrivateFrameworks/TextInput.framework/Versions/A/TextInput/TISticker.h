@class NSUUID, NSArray, NSString, NSData, NSDictionary;

@interface TISticker : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSUUID *identifier;
@property (readonly) NSArray *representations;
@property (readonly) long long effectType;
@property (readonly) NSString *name;
@property (readonly) NSString *externalURI;
@property (readonly) NSString *accessibilityLabel;
@property (readonly) NSString *searchText;
@property (readonly) NSString *accessibilityName;
@property (readonly) NSData *metadata;
@property (readonly) NSDictionary *attributionInfo;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 representations:(id)a1 effectType:(long long)a2 name:(id)a3 externalURI:(id)a4 accessibilityLabel:(id)a5 metadata:(id)a6 attributionInfo:(id)a7;
- (id)initWithIdentifier:(id)a0 representations:(id)a1 effectType:(long long)a2 name:(id)a3 externalURI:(id)a4 accessibilityLabel:(id)a5 metadata:(id)a6 attributionInfo:(id)a7 searchText:(id)a8 accessibilityName:(id)a9;

@end
