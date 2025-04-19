@class NSString;

@interface _UNNotificationContact : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSString *handle;
@property (readonly) long long handleType;
@property (readonly, copy) NSString *serviceName;
@property (readonly, copy) NSString *displayName;
@property (readonly, getter=isDisplayNameSuggested) BOOL displayNameSuggested;
@property (readonly, copy) NSString *customIdentifier;
@property (readonly, copy) NSString *cnContactIdentifier;
@property (readonly, copy) NSString *cnContactFullname;
@property (readonly, getter=isCNContactIdentifierSuggested) BOOL cnContactIdentifierSuggested;
@property (readonly, copy) NSString *preferredName;
@property (readonly, getter=isPreferredNameReal) BOOL preferredNameReal;

+ (id)contactFromINPerson:(id)a0 serviceName:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)_initWithhandle:(id)a0 handleType:(long long)a1 serviceName:(id)a2 displayName:(id)a3 displayNameSuggested:(BOOL)a4 customIdentifier:(id)a5 cnContactIdentifier:(id)a6 cnContactFullname:(id)a7 cnContactIdentifierSuggested:(BOOL)a8;
- (BOOL)isSimilar:(id)a0;
- (unsigned long long)similarHash;

@end
