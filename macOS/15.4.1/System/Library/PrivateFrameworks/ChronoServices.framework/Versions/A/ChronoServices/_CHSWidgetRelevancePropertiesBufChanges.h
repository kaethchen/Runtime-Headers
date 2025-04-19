@interface _CHSWidgetRelevancePropertiesBufChanges : NSObject {
    unsigned char _changeTypeExtensionIdentity;
    unsigned int _replacementExtensionIdentity;
    unsigned char _changeTypeKind;
    unsigned int _replacementKind;
    unsigned char _changeTypeSupportsBackgroundRefresh;
    BOOL _replacementSupportsBackgroundRefresh;
    unsigned char _changeTypeIsDeletion;
    BOOL _replacementIsDeletion;
    unsigned char _changeTypeLastRelevanceUpdate;
    double _replacementLastRelevanceUpdate;
    unsigned char _changeTypeRelevances;
    unsigned int _replacementRelevances;
}

- (void)omitExtensionIdentity;
- (void)omitIsDeletion;
- (void)omitKind;
- (void)omitLastRelevanceUpdate;
- (void)omitRelevances;
- (void)omitSupportsBackgroundRefresh;
- (void)preserveExtensionIdentity;
- (void)preserveIsDeletion;
- (void)preserveKind;
- (void)preserveLastRelevanceUpdate;
- (void)preserveRelevances;
- (void)preserveSupportsBackgroundRefresh;
- (void)replaceExtensionIdentity:(id)a0;
- (void)replaceIsDeletion:(BOOL)a0;
- (void)replaceKind:(id)a0;
- (void)replaceLastRelevanceUpdate:(double)a0;
- (void)replaceRelevances:(id)a0;
- (void)replaceSupportsBackgroundRefresh:(BOOL)a0;

@end
