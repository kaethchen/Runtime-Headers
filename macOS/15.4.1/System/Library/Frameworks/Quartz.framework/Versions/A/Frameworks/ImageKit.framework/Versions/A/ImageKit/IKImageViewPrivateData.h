@class IKComposer, IKImageBackgroundLayer, IKImageLayer;

@interface IKImageViewPrivateData : NSObject

@property IKComposer *composer;
@property IKImageBackgroundLayer *backgroundLayer;
@property IKImageLayer *imageLayer;
@property id delegate;
@property id trackedView;
@property BOOL initialized;
@property BOOL initalizedWithCoder;
@property BOOL doubleClickOpensEditPanel;
@property BOOL editable;
@property BOOL embedded;
@property BOOL selected;
@property BOOL autoresizes;
@property BOOL supportsDragAndDrop;
@property BOOL needsToReplaceClipView;
@property BOOL isInInterfaceBuilderApp;
@property BOOL isInInterfaceBuilderSimulator;

@end
