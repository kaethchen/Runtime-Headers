@class NSString, NSNumber;

@interface ISAuthenticationResponse : NSObject <NSSecureCoding> {
    unsigned long long _urlBagType;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property unsigned long long URLBagType;
@property (readonly) NSString *accountIdentifier;
@property (readonly) long long accountKind;
@property (readonly) NSString *creditString;
@property (readonly) NSNumber *dsID;
@property (readonly) NSString *token;
@property (readonly) NSString *storeFront;
@property (readonly) BOOL isManagedStudent;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)_loadFromDictionary:(id)a0;

@end
