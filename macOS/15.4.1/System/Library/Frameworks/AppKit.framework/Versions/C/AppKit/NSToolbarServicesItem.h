@class NSString;

@interface NSToolbarServicesItem : NSToolbarItem {
    NSString *_representedObject;
}

@property (readonly) id representedObject;

- (void)dealloc;
- (void).cxx_destruct;
- (id)_computeDefaultMenuFormRepresentation;
- (id)initWithItemIdentifier:(id)a0;
- (void)validate;

@end
