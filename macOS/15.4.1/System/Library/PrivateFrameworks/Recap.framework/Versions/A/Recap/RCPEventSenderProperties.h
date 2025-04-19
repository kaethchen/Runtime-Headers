@class NSDictionary;

@interface RCPEventSenderProperties : NSObject <NSCopying, NSSecureCoding> {
    BOOL _sendsMousePointerEvents;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long senderID;
@property (readonly, copy, nonatomic) NSDictionary *properties;
@property (readonly, nonatomic) BOOL sendsMousePointerEvents;

+ (BOOL)_isMouseSender:(id)a0;
+ (id)_senderWithProperties:(id)a0 senderID:(unsigned long long)a1;
+ (id)_cachedPropertiesOrCacheIfNeeded:(id)a0 senderID:(unsigned long long)a1;
+ (id)crownSender;
+ (id)gamepadSender;
+ (id)globalPositionSender;
+ (id)keyboardSender;
+ (id)keyboardSenderForDisplayUUID:(id)a0;
+ (id)mouseSender;
+ (id)naturalInputCollectionSender;
+ (id)pencilDigitizerSender;
+ (id)phoneButtonSender;
+ (id)senderFromIOHIDService:(struct __IOHIDServiceClient { } *)a0;
+ (id)senderWithProperties:(id)a0;
+ (id)senderWithProperties:(id)a0 senderID:(unsigned long long)a1;
+ (id)supplyMissingStandardProperties:(id)a0 senderID:(unsigned long long)a1;
+ (id)touchScreenDigitizerSender;
+ (id)touchScreenDigitizerSenderForDisplayUUID:(id)a0;
+ (id)trackpadSender;
+ (id)tvRemoteSender;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
