@interface BRCFSDownloaderUtil : NSObject

+ (id)cancellableDownloadKinds;
+ (int)downloadKindWithEtagIfLoser:(id)a0 options:(unsigned long long)a1;

@end
