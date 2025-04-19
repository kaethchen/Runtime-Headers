@class NSSet, NSString;

@interface BSDescriptionStyle : NSObject <BSDescriptionStreamable, NSCopying, NSMutableCopying> {
    long long _verbosity;
    long long _debugging;
    long long _collectionLineBreak;
    long long _proemItemSeparator;
    long long _bodyItemSeparator;
    long long _nameTruncation;
    long long _maximumNameLengthBeforeTruncation;
    long long _valueTruncation;
    long long _maximumValueLengthBeforeTruncation;
    long long _collectionTruncationStyle;
    long long _keyValuePairSorting;
    long long _maximumItemCountForTruncation;
    NSSet *_clientInformation;
}

@property (readonly, nonatomic) long long verbosity;
@property (readonly, nonatomic) long long debugging;
@property (readonly, nonatomic) long long collectionLineBreak;
@property (readonly, nonatomic) long long proemItemSeparator;
@property (readonly, nonatomic) long long bodyItemSeparator;
@property (readonly, nonatomic) long long nameTruncation;
@property (readonly, nonatomic) long long maximumNameLengthBeforeTruncation;
@property (readonly, nonatomic) long long valueTruncation;
@property (readonly, nonatomic) long long maximumValueLengthBeforeTruncation;
@property (readonly, nonatomic) long long collectionTruncationStyle;
@property (readonly, nonatomic) long long keyValuePairSorting;
@property (readonly, nonatomic) long long maximumItemCountForTruncation;
@property (readonly, copy, nonatomic) NSSet *clientInformation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;
+ (id)build:(id /* block */)a0;
+ (id)defaultCollectionLineBreakStyle;
+ (id)collectionLineBreakEachItemStyle;
+ (id)collectionLineBreakNoneStyle;
+ (id)debugStyle;
+ (id)keyValuePairSortedByKeyStyle;
+ (id)styleForEndTruncatingCollectionsOverItemCount:(long long)a0;
+ (id)succinctStyle;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)appendDescriptionToFormatter:(id)a0;
- (id)styleByOverlayingStyle:(id)a0;

@end
