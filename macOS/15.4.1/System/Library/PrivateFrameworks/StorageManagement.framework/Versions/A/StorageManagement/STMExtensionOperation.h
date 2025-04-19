@class NSArray, STMOpaqueExtension;

@interface STMExtensionOperation : STMOperation

@property (copy) NSArray *returnedItems;
@property (readonly, copy, nonatomic) NSArray *allInputItems;
@property (retain) STMOpaqueExtension *extension;
@property (copy) NSArray *inputItems;

+ (id)commandName;

- (void).cxx_destruct;
- (void)main;
- (id)commandInputItem;
- (void)finishWithItems:(id)a0;

@end
