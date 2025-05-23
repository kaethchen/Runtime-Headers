@class NSMutableSet;

@interface CalDAVChecksumVersionsItem : CoreDAVItem {
    NSMutableSet *_versionStringsSupported;
}

- (id)init;
- (void).cxx_destruct;
- (void)addVersionSupported:(id)a0;
- (id)copyParseRules;
- (BOOL)supportsVersion:(id)a0;

@end
