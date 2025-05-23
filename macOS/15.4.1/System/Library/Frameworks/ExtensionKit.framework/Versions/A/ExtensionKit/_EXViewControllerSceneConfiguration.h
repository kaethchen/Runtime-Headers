@class NSString, NSStoryboard;

@interface _EXViewControllerSceneConfiguration : _EXSceneConfiguration <NSCopying>

@property (copy) NSString *storyboardName;
@property (copy) NSString *viewControllerClassName;
@property (retain, nonatomic) NSStoryboard *storyboard;
@property (retain, nonatomic) Class viewControllerClass;

- (void).cxx_destruct;

@end
