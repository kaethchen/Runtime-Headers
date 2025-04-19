@class NSString;

@interface SPMetadataGroupHeadingResult : SPGroupHeadingResult {
    NSString *_focusString;
}

@property (readonly) NSString *focusString;

- (void).cxx_destruct;
- (id)initWithDisplayName:(id)a0 keyID:(id)a1 focusString:(id)a2;
- (id)rollOverString;
- (BOOL)supportsFocus;

@end
