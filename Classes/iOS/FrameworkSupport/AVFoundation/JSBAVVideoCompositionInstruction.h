#import <AVFoundation/AVBase.h>
#import <AVFoundation/AVAsset.h>
#import <AVFoundation/AVVideoCompositing.h>
#import <Foundation/Foundation.h>
#import <CoreVideo/CoreVideo.h>
#import <CoreMedia/CMTime.h>
#import <CoreMedia/CMTimeRange.h>

@import AVFoundation;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBAVVideoCompositionInstruction <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, readonly) CMPersistentTrackID passthroughTrackID;
@property (nonatomic, retain) id backgroundColor;
@property (nonatomic, readonly) float renderScale;
@property (nonatomic, retain, readonly) AVVideoCompositionCoreAnimationTool *animationTool;
@property (nonatomic, readonly) CGSize renderSize;
@property (nonatomic, readonly) CMTime frameDuration;
@property (nonatomic, retain, readonly) Class customVideoCompositorClass;
@property (nonatomic, copy, readonly) NSArray *layerInstructions;
@property (nonatomic, assign, readonly) CMTimeRange timeRange;
@property (nonatomic, readonly) NSArray *requiredSourceTrackIDs;
@property (nonatomic, assign, readonly) CMPersistentTrackID trackID;
@property (nonatomic, copy, readonly) NSArray *instructions;
@property (nonatomic, assign, readonly) BOOL enablePostProcessing;

#pragma clang diagnostic pop

@end
