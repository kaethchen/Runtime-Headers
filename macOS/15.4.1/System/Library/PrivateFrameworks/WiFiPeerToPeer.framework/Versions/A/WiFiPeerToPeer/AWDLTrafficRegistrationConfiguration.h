@class NSString, WiFiMACAddress;

@interface AWDLTrafficRegistrationConfiguration : NSObject <NSSecureCoding, NSCopying> {
    NSString *_derivedLocalization;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *localization;
@property (nonatomic) BOOL activeFlagOverride;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (copy, nonatomic) NSString *uniqueIdentifier;
@property (copy, nonatomic) WiFiMACAddress *peerAddress;
@property (nonatomic) long long options;
@property (nonatomic) BOOL legacyUpgradeRequired;
@property (nonatomic) unsigned short preferredChannel;
@property (nonatomic) unsigned short secondaryPreferredChannel;

+ (id)localizedErrorForConflictBetweenExistingService:(id)a0 withNewService:(id)a1 localDeviceName:(id)a2 localization:(id)a3;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(struct __CFDictionary { } *)a0 isActive:(BOOL *)a1;
- (id)initWithUniqueIdentifier:(id)a0 peerAddress:(id)a1;
- (BOOL)hasSimilarOptionsTo:(id)a0;
- (id)initWithUniqueIdentifier:(id)a0 peerIPv6Address:(struct in6_addr { union { unsigned char x0[16]; unsigned short x1[8]; unsigned int x2[4]; } x0; })a1;

@end
