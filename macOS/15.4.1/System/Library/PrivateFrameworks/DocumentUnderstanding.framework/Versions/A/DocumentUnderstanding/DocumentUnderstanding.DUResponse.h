@class NSArray;

@interface DocumentUnderstanding.DUResponse : NSObject <NSCoding, NSCopying> {
    void /* unknown type, empty encoding */ poem;
    void /* unknown type, empty encoding */ posTags;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ topics;
@property (nonatomic, retain) void /* unknown type, empty encoding */ structuredEntities;
@property (nonatomic, retain) void /* unknown type, empty encoding */ languageTags;
@property (nonatomic, retain) void /* unknown type, empty encoding */ userInterfaceUnderstandingResults;
@property (nonatomic, retain) void /* unknown type, empty encoding */ documentCategories;
@property (nonatomic, retain) void /* unknown type, empty encoding */ foundInEventResult;
@property (nonatomic, retain) void /* unknown type, empty encoding */ foundInEventClassificationResult;
@property (nonatomic, copy) NSArray *poem;
@property (nonatomic, copy) NSArray *posTags;
@property (nonatomic, retain) void /* unknown type, empty encoding */ responseDebugInfo;

- (id)copyWithZone:(void *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
