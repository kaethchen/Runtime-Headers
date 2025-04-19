@protocol MDModeProviding;

@interface SVXDialogTransformer : NSObject {
    id<MDModeProviding> _modeProvider;
}

- (void).cxx_destruct;
- (id)initWithModeProvider:(id)a0;
- (id)transformAddDialogs:(id)a0;
- (id)transformAddViews:(id)a0;

@end
