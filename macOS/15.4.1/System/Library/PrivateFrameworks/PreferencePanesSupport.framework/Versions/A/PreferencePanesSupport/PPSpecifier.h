@class NSUUID, NSView, NSString, NSArray, NSDictionary, NSImage, NSViewController, NSNumber;
@protocol PPSpecifierDelegate;

@interface PPSpecifier : NSObject {
    NSUUID *_uuid;
    BOOL _allowsTruncation;
}

@property (readonly) NSView *tableCellView;
@property (readonly) NSUUID *uuid;
@property (readonly) NSViewController *viewController;
@property (retain) NSViewController *viewController;
@property unsigned long long type;
@property (retain) NSString *extensionIdentifier;
@property (retain) NSDictionary *extensionPersonaity;
@property (retain) NSView *tableCellView;
@property (retain) NSArray *searchKeywords;
@property BOOL enabled;
@property (retain) NSImage *icon;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (readonly) NSView *view;
@property (retain) NSString *helpAnchor;
@property (retain) NSNumber *badgeCount;
@property (retain) NSImage *badgeImage;
@property (weak) id<PPSpecifierDelegate> delegate;
@property BOOL allowsTruncation;
@property unsigned long long titleLineBreakMode;

+ (id)labelSpecifierWithString:(id)a0;
+ (id)separatorSpecifier;
+ (id)specifierWithExtension:(id)a0 personality:(id)a1;
+ (id)specifierWithExtension:(id)a0 personality:(id)a1 searchKeywords:(id)a2;
+ (id)specifierWithViewController:(id)a0;
+ (id)specifierWithViewController:(id)a0 searchKeywords:(id)a1;

- (void).cxx_destruct;
- (id)uuid;
- (id)view;
- (id)initWithType:(unsigned long long)a0;
- (BOOL)hasElementForKey:(id)a0;
- (void)revealElementForKey:(id)a0;
- (BOOL)allowsTruncation;
- (id)initWithType:(unsigned long long)a0 searchKeywords:(id)a1;
- (void)setAllowsTruncation:(BOOL)a0;

@end
