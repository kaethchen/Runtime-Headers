@class NSAttributedString;

@interface MOPhotosSupplementaryFooterInfo : NSObject

@property (retain, nonatomic) NSAttributedString *title;
@property (retain, nonatomic) NSAttributedString *referencedMediaInformation;
@property (retain, nonatomic) NSAttributedString *subtitle;
@property (retain, nonatomic) NSAttributedString *message;
@property (retain, nonatomic) NSAttributedString *information;
@property (nonatomic) BOOL highlightInformation;
@property (copy, nonatomic) id /* block */ action;
@property (nonatomic) double progress;
@property (nonatomic) BOOL progressDisabled;

- (id)init;
- (void).cxx_destruct;

@end
