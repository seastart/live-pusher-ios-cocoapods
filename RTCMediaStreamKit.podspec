#
# Be sure to run `pod lib lint RTCMediaStreamKit.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'RTCMediaStreamKit'
  s.version          = '0.1.0'
  s.summary          = 'RTC推流服务引擎.'
  
# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
TODO: Add long description of the pod here.
                       DESC
                       
  s.homepage         = 'http://code.zaoing.com/meeting/RTCMediaStreamKit'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'SailorGa' => 'ljia789@gmail.com' }
  s.source           = { :git => 'http://code.zaoing.com/meeting/RTCMediaStreamKit.git', :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'
  
  # 指定支持平台
  s.ios.deployment_target = '9.0'
  
  # 依赖系统Frameworks库
  s.ios.frameworks = 'QuartzCore', 'Foundation', 'CoreFoundation', 'Security', 'VideoToolbox'
  # 依赖系统Librarie库
  s.ios.library = 'c++', 'z', 'iconv'
  
  # 依赖本地Frameworks库
  s.vendored_frameworks = 'RTCMediaStreamKit/RTCMediaStreamKit.framework'
end
