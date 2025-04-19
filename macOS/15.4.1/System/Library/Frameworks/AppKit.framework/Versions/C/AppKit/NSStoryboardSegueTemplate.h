@class NSString, NSStoryboard;

@interface NSStoryboardSegueTemplate : NSObject <NSCoding> {
    NSString *_segueClassName;
}

@property (retain) NSStoryboard *storyboard;
@property (readonly) NSString *destinationControllerIdentifier;
@property (readonly) NSString *identifier;
@property (weak) id controller;
@property BOOL performOnViewLoad;
@property (readonly) NSString *destinationControllerCreationSelectorName;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_perform:(id)a0;
- (Class)effectiveSegueClass;
- (id /* block */)newDefaultPerformHandlerForSegue:(id)a0;
- (id /* block */)newDefaultPrepareHandlerForSegue:(id)a0;
- (void)perform:(id)a0;
- (id)segueWithDestinationViewController:(id)a0;
- (id)targetController;

@end
