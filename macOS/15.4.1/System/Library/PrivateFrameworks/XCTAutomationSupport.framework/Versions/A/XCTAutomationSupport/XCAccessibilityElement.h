@class NSData;

@interface XCAccessibilityElement : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSData *token;
@property (readonly) unsigned long long elementOrHash;
@property (readonly) unsigned long long elementID;
@property (readonly) struct __AXUIElement { } *AXUIElement;
@property (readonly) int processIdentifier;
@property (readonly) unsigned long long elementType;
@property (readonly) BOOL hasValidElementType;
@property (readonly) unsigned long long originPlatform;

+ (id)elementWithAXUIElement:(struct __AXUIElement { } *)a0;
+ (id)mockInvalidElementWithProcessIdentifier:(int)a0 originPlatform:(unsigned long long)a1 payload:(id)a2;
+ (id)deviceElement;
+ (id)elementWithProcessIdentifier:(int)a0;
+ (id)elementWithProcessIdentifier:(int)a0 originPlatform:(unsigned long long)a1;
+ (id)mockElementWithProcessIdentifier:(int)a0;
+ (id)mockElementWithProcessIdentifier:(int)a0 originPlatform:(unsigned long long)a1;
+ (id)mockElementWithProcessIdentifier:(int)a0 originPlatform:(unsigned long long)a1 payload:(id)a2;
+ (id)mockElementWithProcessIdentifier:(int)a0 payload:(id)a1;
+ (id)mockInvalidElementWithProcessIdentifier:(int)a0;
+ (id)mockInvalidElementWithProcessIdentifier:(int)a0 originPlatform:(unsigned long long)a1;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAXUIElement:(struct __AXUIElement { } *)a0 elementType:(unsigned long long)a1 originPlatform:(unsigned long long)a2;
- (id)initWithToken:(id)a0 elementOrHash:(unsigned long long)a1 elementID:(unsigned long long)a2 pid:(int)a3 elementType:(unsigned long long)a4 originPlatform:(unsigned long long)a5;

@end
