@class NSString, NSMutableOrderedSet;

@interface WBSOpenApplicationsPreferenceValueList : NSObject {
    NSMutableOrderedSet *_alwaysAllowedSchemes;
    unsigned long long _currentSize;
}

@property (readonly, copy, nonatomic) NSString *domain;
@property (readonly, copy, nonatomic) NSString *serializedRepresentation;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDomain:(id)a0;
- (BOOL)containsScheme:(id)a0;
- (void)addScheme:(id)a0;
- (id)initWithDomain:(id)a0 value:(id)a1;

@end
