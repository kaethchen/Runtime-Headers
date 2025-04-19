@class NSDictionary, NSString, NSAttributedString;

@interface ICTextStyle : NSObject

@property (retain) NSDictionary *attributes;
@property (retain) NSString *name;
@property unsigned int ttStyle;
@property (readonly, copy, nonatomic) NSAttributedString *attributedName;
@property (readonly, copy, nonatomic) NSString *styleID;
@property (readonly) BOOL isTextList;

+ (id)titleStyle;
+ (id)dashStyle;
+ (id)subheadingStyle;
+ (id)fixedWidthStyle;
+ (BOOL)autoListInsertionEnabled;
+ (id)bodyStyle;
+ (id)bulletStyle;
+ (id)defaultTextStyles;
+ (id)headingStyle;
+ (id)icaxStyleDescriptionForBIUSStyle:(unsigned long long)a0;
+ (id)icaxStyleDescriptionForNamedStyle:(unsigned int)a0;
+ (unsigned int)namedStyleFromStyleID:(id)a0;
+ (unsigned int)noteDefaultNamedStyle;
+ (id)numberedStyle;
+ (void)setAutoListInsertionEnabled:(BOOL)a0;
+ (void)setNoteDefaultNamedStyle:(unsigned int)a0;
+ (id)settingsDescriptionForNamedStyle:(unsigned int)a0;
+ (id)styleForNamedStyle:(unsigned int)a0;
+ (id)titleForNamedStyle:(unsigned int)a0;
+ (unsigned int)validatedNamedStyle:(unsigned int)a0;

- (void).cxx_destruct;
- (id)icaxStyleDescription;

@end
