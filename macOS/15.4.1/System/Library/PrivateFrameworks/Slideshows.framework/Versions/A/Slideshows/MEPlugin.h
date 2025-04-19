@class MPDocument, MEExporter;

@interface MEPlugin : NSObject {
    MPDocument *_document;
}

@property (readonly) MEExporter *delegate;

- (void)dealloc;
- (id)initWithIdentifier:(id)a0 andDocument:(id)a1 andDelegate:(id)a2;

@end
