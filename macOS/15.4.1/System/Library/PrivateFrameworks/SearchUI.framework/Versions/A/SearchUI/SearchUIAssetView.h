@class SFShowPhotosOneUpViewCommand;

@interface SearchUIAssetView : PHAssetView

@property (retain, nonatomic) SFShowPhotosOneUpViewCommand *command;

- (void).cxx_destruct;
- (id)menuForEvent:(id)a0;
- (void)rejectPerson;
- (id)updateMenu:(id)a0 forEvent:(id)a1 atPoint:(struct CGPoint { double x0; double x1; })a2;

@end
