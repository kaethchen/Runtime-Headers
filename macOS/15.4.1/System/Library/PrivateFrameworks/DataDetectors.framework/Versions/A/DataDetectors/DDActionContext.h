@class NSDate, NSString, NSURL, NSArray, NSView, NSPersonNameComponents, NSImage, NSPopover, NSNumber;

@interface DDActionContext : NSObject <NSCopying, NSSecureCoding> {
    struct __DDResult { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __DDQueryRange { struct __DDQueryOffset { unsigned short x0 : 16; unsigned short x1 : 16; unsigned int x2 : 32; } x0; struct __DDQueryOffset { unsigned short x0 : 16; unsigned short x1 : 16; unsigned int x2 : 32; } x1; } x1; struct { long long x0; long long x1; } x2; long long x3; struct __CFArray *x4; struct __CFString *x5; struct __CFString *x6; void *x7; struct __CFDictionary *x8; long long x9; unsigned char x10; float x11; } *_mainResult;
    struct CGSize { double width; double height; } _targetViewSize;
    struct CGSize { double width; double height; } _targetScreenSize;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } highlightFrame;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } aimFrame;
@property (copy) NSString *eventTitle;
@property (copy) NSString *leadingText;
@property (copy) NSString *trailingText;
@property (copy) NSString *coreSpotlightUniqueIdentifier;
@property (copy) NSDate *referenceDate;
@property (copy) NSString *authorUUID;
@property (copy) NSString *authorEmailAddress;
@property (copy) NSString *authorName;
@property (copy) NSPersonNameComponents *authorNameComponents;
@property (copy) NSImage *authorPicture;
@property (copy) NSString *hostUUID;
@property (copy) NSURL *URL;
@property (copy) NSString *matchedString;
@property (retain) NSArray *allResults;
@property (copy) NSString *selectionString;
@property (retain) struct __DDResult { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __DDQueryRange { struct __DDQueryOffset { unsigned short x0 : 16; unsigned short x1 : 16; unsigned int x2 : 32; } x0; struct __DDQueryOffset { unsigned short x0 : 16; unsigned short x1 : 16; unsigned int x2 : 32; } x1; } x1; struct { long long x0; long long x1; } x2; long long x3; struct __CFArray *x4; struct __CFString *x5; struct __CFString *x6; void *x7; struct __CFDictionary *x8; long long x9; unsigned char x10; float x11; } *mainResult;
@property BOOL immediate;
@property BOOL isRightClick;
@property (copy) NSArray *groupAllResults;
@property (copy) NSNumber *groupCategory;
@property (copy) NSString *groupTranscript;
@property (copy) id /* block */ interactionStartedHandler;
@property (copy) id /* block */ interactionChangedHandler;
@property (copy) id /* block */ interactionStoppedHandler;
@property (copy) NSArray *allowedActionUTIs;
@property (copy) NSArray *disallowedActionUTIs;
@property (retain) id transientObject;
@property BOOL altMode;
@property BOOL skipAnimation;
@property BOOL holdContent;
@property (copy, nonatomic) id /* block */ unholdContentBlock;
@property (retain, nonatomic) NSString *hostProcessIdentifier;
@property (weak) NSView *view;
@property (retain) NSPopover *popover;

+ (id)contextFromDictionary:(id)a0;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_initWithWebKitPropertyListData:(id)a0;
- (id)_webKitPropertyListData;
- (id)_initWithPlist:(id)a0;
- (id)contextForView:(id)a0 altMode:(BOOL)a1 interactionStartedHandler:(id /* block */)a2 interactionChangedHandler:(id /* block */)a3 interactionStoppedHandler:(id /* block */)a4;
- (void)_secureDecodingWithCoder:(id)a0;
- (id)allResultsToConsider;
- (void)augmentContextWithDictionary:(id)a0;
- (void)retargetToView;
- (struct CGSize { double x0; double x1; })targetScreenSize;
- (struct CGSize { double x0; double x1; })targetViewSize;
- (void)unholdContent;

@end
