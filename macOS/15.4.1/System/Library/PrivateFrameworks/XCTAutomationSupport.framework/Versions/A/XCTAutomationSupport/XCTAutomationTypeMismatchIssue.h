@class NSString, NSDictionary, NSArray, XCAccessibilityElement;

@interface XCTAutomationTypeMismatchIssue : NSObject <XCTRuntimeIssue>

@property (class, readonly) NSString *capability;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) XCAccessibilityElement *accessibilityElement;
@property (readonly) unsigned long long legacyElementType;
@property (readonly) unsigned long long elementTypeFromAutomationType;
@property (readonly, copy) NSDictionary *accessibilityAttributes;
@property (readonly) NSString *shortDescription;
@property (readonly) NSString *detailedDescription;
@property (readonly) NSArray *callStackAddresses;
@property (readonly) unsigned long long aggregationHash;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initForAccessibilityElement:(id)a0 legacyElementType:(unsigned long long)a1 elementTypeFromAutomationType:(unsigned long long)a2 accessibilityAttributes:(id)a3;
- (BOOL)isEqualForAggregationWith:(id)a0;

@end
