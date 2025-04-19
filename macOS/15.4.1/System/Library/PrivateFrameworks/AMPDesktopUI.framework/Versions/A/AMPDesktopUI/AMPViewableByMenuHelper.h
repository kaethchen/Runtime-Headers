@class NSObject;
@protocol AMPViewableByContainer;

@interface AMPViewableByMenuHelper : NSObject

@property (weak, nonatomic) NSObject<AMPViewableByContainer> *lastUsedProvider;

- (void).cxx_destruct;
- (void)menuDidClose:(id)a0;
- (void)doViewByOptionSelected:(id)a0;
- (id)findViewByContainerResponder;
- (void)refreshItemsInMenu:(id)a0;

@end
