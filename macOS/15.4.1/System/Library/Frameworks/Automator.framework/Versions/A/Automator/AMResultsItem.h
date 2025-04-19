@class NSString, NSImage;

@interface AMResultsItem : NSObject {
    NSString *_humanReadableName;
    NSImage *_icon;
    NSString *_iconPath;
}

@property (retain, nonatomic) id object;
@property (retain, nonatomic) NSString *UUID;
@property (readonly, nonatomic) NSImage *icon;
@property (readonly, nonatomic) NSString *iconPath;
@property (readonly, nonatomic) NSString *humanReadableName;
@property (readonly, nonatomic) NSImage *imageRepresentation;
@property (readonly, nonatomic) NSString *imageRepresentationType;
@property (readonly, nonatomic) NSString *imageUID;
@property (readonly, nonatomic) id result;

+ (id)resultsItemWithObject:(id)a0;

- (id)description;
- (id)initWithObject:(id)a0;
- (void).cxx_destruct;
- (id)imageTitle;
- (id)imageSubtitle;

@end
