@class NSArray, NSString, NSMutableSet;
@protocol ICNFMCActivityTarget;

@interface _ICNFMCActivityMonitorMultiTarget : NSObject <ICNFMCActivityTarget> {
    NSMutableSet *_allTargets;
}

@property (retain, nonatomic) id<ICNFMCActivityTarget> primaryTarget;
@property (readonly, copy, nonatomic) NSArray *allTargets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
