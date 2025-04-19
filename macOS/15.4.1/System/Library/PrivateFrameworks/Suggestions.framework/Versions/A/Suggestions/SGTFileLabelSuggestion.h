@class NSColor, NSUUID, NSImage;

@interface SGTFileLabelSuggestion : SGTSuggestion {
    NSImage *swatchImage;
    long long label;
    BOOL isFinderLabel;
}

@property (readonly) NSColor *labelColor;
@property (readonly) long long label;
@property (readonly) NSUUID *labelUUID;

+ (id)_colorForLabel:(long long)a0;
+ (id)labelsCategory;

- (void).cxx_destruct;
- (id)_identifier;
- (long long)scope;
- (id)scopes;
- (id)tokenTitle;
- (id)_propertyListRepresentation;
- (BOOL)_shouldNotBeIncludedInRecents;
- (id)displayNameForScope:(long long)a0;
- (id)imageForMenu;
- (id)initWithLabelIdentifier:(id)a0 displayName:(id)a1 labelColorIndex:(long long)a2 labelUUID:(id)a3 isFinderLabel:(BOOL)a4;
- (id)initWithMDLabel:(struct __MDLabel { } *)a0;
- (id)queryStringFragment;
- (id)tokenImage;

@end
